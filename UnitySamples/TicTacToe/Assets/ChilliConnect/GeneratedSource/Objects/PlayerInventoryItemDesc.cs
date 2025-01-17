//
//  This file was auto-generated using the ChilliConnect SDK Generator.
//
//  The MIT License (MIT)
//
//  Copyright (c) 2015 Tag Games Ltd
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//

using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Diagnostics;
using SdkCore;

namespace ChilliConnect 
{
	/// <summary>
	/// <para>A mutable description of a PlayerInventoryItem.</para>
	///
	/// <para>This is not thread-safe and should typically only be used to create new 
	/// instances of PlayerInventoryItem.</para>
	/// </summary>
	public sealed class PlayerInventoryItemDesc
	{
		/// <summary>
		/// The inventory item identifier.
		/// </summary>
        public string ItemId { get; set; }
	
		/// <summary>
		/// The inventory item key.
		/// </summary>
        public string Key { get; set; }
	
		/// <summary>
		/// The inventory item name. Note: this may be empty if the Economy Inventory Item
		/// definition no longer exists.
		/// </summary>
        public string Name { get; set; }
	
		/// <summary>
		/// The data associated with this item instance.
		/// </summary>
        public MultiTypeValue InstanceData { get; set; }
	
		/// <summary>
		/// The identifier for the last write for this item in the player's inventory.
		/// </summary>
        public string WriteLock { get; set; }

		/// <summary>
		/// Initialises a new instance with the given required properties.
		/// </summary>
		///
		/// <param name="itemId">The inventory item identifier.</param>
		/// <param name="key">The inventory item key.</param>
		/// <param name="writeLock">The identifier for the last write for this item in the player's inventory.</param>
		public PlayerInventoryItemDesc(string itemId, string key, string writeLock)
		{
			ReleaseAssert.IsNotNull(itemId, "Item Id cannot be null.");
			ReleaseAssert.IsNotNull(key, "Key cannot be null.");
			ReleaseAssert.IsNotNull(writeLock, "Write Lock cannot be null.");
	
            ItemId = itemId;
            Key = key;
            WriteLock = writeLock;
		}
	}
}
