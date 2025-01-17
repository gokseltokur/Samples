﻿using UnityEngine;
using System.Collections;
using ChilliConnect;
using System.Collections.Generic;

/// Manages the displaying of recipe buttons on the recipe button list
/// 
public class RecipeListUIController: MonoBehaviour 
{
	private const int k_maxNumElements = 10;

	private RecipeListElementUIController[] m_elementPool = new RecipeListElementUIController[k_maxNumElements];
	private Transform m_contentParent;
	private Transform m_pooledParent;

	private int m_numElementsUsed = 0;

	private void Awake() 
	{
		m_contentParent = transform.Find("Content");
		GameObject prefab = Resources.Load<GameObject>("RecipeListUIElement");
		m_pooledParent = new GameObject("RecipeListUIElementPool").transform;

		for(int i=0; i<m_elementPool.Length; ++i)
		{
			m_elementPool[i] = (GameObject.Instantiate(prefab, m_pooledParent) as GameObject).GetComponent<RecipeListElementUIController>();
		}
	}

	public void populateRecipeList(List<Recipe> recipes)
	{
		for(int i=0; i<m_numElementsUsed; ++i)
		{
			m_elementPool[i].transform.SetParent(m_pooledParent, false);
		}

		m_numElementsUsed = recipes.Count;

		for(int i=0; i<m_numElementsUsed; ++i)
		{
			m_elementPool[i].transform.SetParent(m_contentParent, false);
			m_elementPool[i].Init(recipes[i]);
		}
	}
}
