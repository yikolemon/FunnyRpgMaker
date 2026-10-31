/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012e958 */

void FUN_18012e958(int param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  lVar1 = DAT_180419160;
  if ((*(byte *)(*(longlong *)(DAT_180419160 + 0x23e8) + 0x17) & 8) != 0) {
    return;
  }
  iVar2 = FUN_18011bf4f();
  lVar3 = FUN_18012e8f5(iVar2 + param_1,0x80000001,param_1);
  if (lVar3 == 0) {
    iVar4 = 0;
    if (param_1 < 0) {
      iVar4 = *(int *)(lVar1 + 0x15b8) + -1;
    }
    lVar3 = FUN_18012e8f5(iVar4,iVar2,param_1);
    if (lVar3 == 0) goto LAB_18012e9c6;
  }
  *(longlong *)(lVar1 + 0x23f0) = lVar3;
  *(longlong *)(lVar1 + 0x23e8) = lVar3;
  *(undefined8 *)(lVar1 + 0x2414) = 0;
  *(undefined8 *)(lVar1 + 0x241c) = 0;
LAB_18012e9c6:
  *(undefined1 *)(lVar1 + 0x240c) = 0;
  return;
}

