/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005c21a */

longlong FUN_14005c21a(longlong param_1,char *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  iVar2 = *(int *)(param_1 + 0x19c);
  if (0 < (longlong)iVar2) {
    lVar4 = *(longlong *)(param_1 + 0x1a0) + -0x18;
    uVar5 = 1;
    do {
      puVar1 = (undefined8 *)(lVar4 + 0x18);
      lVar4 = lVar4 + 0x18;
      iVar3 = strcmp((char *)*puVar1,param_2);
      if ((ulonglong)(longlong)iVar2 <= uVar5) break;
      uVar5 = uVar5 + 1;
    } while (iVar3 != 0);
    if (iVar3 == 0) {
      return lVar4;
    }
  }
  return 0;
}

