/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140015aee */

uint FUN_140015aee(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
LAB_140015b28:
    *param_1 = 0;
    uVar2 = (uint)*(byte *)((longlong)param_1 + 9);
  }
  else {
    if ((*(byte **)plVar1[7] == (byte *)0x0) || (*(int *)plVar1[10] < 1)) {
      uVar2 = (**(code **)(*plVar1 + 0x30))();
      if (uVar2 == 0xffffffff) goto LAB_140015b28;
    }
    else {
      uVar2 = (uint)**(byte **)plVar1[7];
    }
    *(char *)((longlong)param_1 + 9) = (char)uVar2;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  return uVar2;
}

