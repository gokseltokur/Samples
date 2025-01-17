﻿using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.EventSystems;
using ChilliConnect;

/// Controls the elements rendered in the list of characters.
/// 
public class CharacterListElementUIController : MonoBehaviour
{
	private Character m_character;
	private Text m_characterId;
	private Text m_charcterLevel;
	private Text m_characterAtk;
	private Text m_characterDef;
	private Image m_background;

	/// Gather the UI
	/// 
	private void Awake()
	{
		m_characterId = transform.Find("CharacterID").GetComponent<Text>();
		m_charcterLevel = transform.Find("CharacterLevel").GetComponent<Text>();
		m_characterAtk = transform.Find("CharacterAtk").GetComponent<Text>();
		m_characterDef = transform.Find("CharacterDef").GetComponent<Text>();
		m_background = GetComponent<Image>();
	}

	/// Update the element with the character data
	///
	/// @param character
	/// 	The Character to display
	/// 
	public void Init(Character character)
	{
		m_characterId.text = "CharacterID: " + character.CharacterID;
		m_charcterLevel.text = "Lvl: " + character.CharacterLevel.ToString();
		m_characterAtk.text = "Atk: " + character.CharacterAtk.ToString();
		m_characterDef.text = "Def: " + character.CharacterDef.ToString();

		m_character = character;
	}
}
