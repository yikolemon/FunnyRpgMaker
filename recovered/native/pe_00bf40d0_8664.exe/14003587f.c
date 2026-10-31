/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003587f */

longlong FUN_14003587f(ushort *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined6 extraout_var;
  longlong lVar5;
  
  uVar4 = FUN_14003586f(param_1);
  uVar3 = param_1[1];
  if ((int)CONCAT62(extraout_var,uVar4) == 1) {
    bVar1 = *(byte *)((longlong)param_1 + 3);
    lVar5 = FUN_14003587a((longlong)param_1);
    lVar5 = (ulonglong)(byte)uVar3 * 0x200 + lVar5 + (ulonglong)bVar1 * 2;
  }
  else {
    uVar2 = *(undefined1 *)((longlong)param_1 + 3);
    lVar5 = FUN_14003587a((longlong)param_1);
    lVar5 = lVar5 + (ulonglong)CONCAT11((byte)uVar3,uVar2) * 6;
  }
  return lVar5;
}

