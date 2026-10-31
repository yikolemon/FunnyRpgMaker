/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009da44 */

longlong FUN_14009da44(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((undefined4 *)*param_2 == (undefined4 *)0x0) {
    lVar2 = 0;
    lVar4 = param_1;
  }
  else {
    iVar1 = FUN_140077d91(param_1,0x1e,"#%03d: ",*(undefined4 *)*param_2);
    lVar2 = *param_2;
    lVar4 = iVar1 + param_1;
  }
  plVar5 = param_2 + 1;
  if (lVar2 != 0) {
    plVar5 = (longlong *)(lVar2 + 0x10);
  }
  uVar3 = FUN_14009c5fd(*plVar5);
  FUN_140077d91(lVar4,(param_1 - lVar4) + 0x1e,"0x%X",uVar3);
  return param_1;
}

