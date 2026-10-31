/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140059b78 */

ulonglong FUN_140059b78(longlong param_1,undefined1 param_2)

{
  undefined2 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined1 local_30 [8];
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 8);
  (**(code **)(*local_28 + 8))();
  plVar2 = (longlong *)FUN_140059c2a(local_30);
  uVar1 = (**(code **)(*plVar2 + 0x60))
                    (plVar2,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_2) & 0xffffffff);
  if (local_28 != (longlong *)0x0) {
    puVar3 = (undefined8 *)(**(code **)(*local_28 + 0x10))();
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return CONCAT62((int6)((ulonglong)unaff_RSI >> 0x10),uVar1) & 0xffffffff;
}

