/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022005c */

int FUN_18022005c(uint *param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  
  uVar5 = *param_1 + 1;
  if (param_1[1] < uVar5) {
    iVar2 = FUN_1802200dd(param_1,uVar5,param_2);
    if (iVar2 != 0) {
      lVar4 = 0;
      goto LAB_1802200cb;
    }
  }
  lVar4 = *(longlong *)(param_1 + 2);
  uVar3 = (ulonglong)uVar5;
  iVar2 = 0;
  *(undefined4 *)(lVar4 + -0x18 + uVar3 * 0x18) = 0;
  *(undefined4 *)(lVar4 + -8 + uVar3 * 0x18) = 0;
  uVar1 = *(uint *)(lVar4 + -0x14 + uVar3 * 0x18);
  if (uVar1 != 0) {
    FUN_1802a89a0(*(undefined8 *)(lVar4 + uVar3 * 0x18 + -0x10),0,uVar1 >> 3);
  }
  lVar4 = lVar4 + uVar3 * 0x18 + -0x18;
  *param_1 = uVar5;
LAB_1802200cb:
  *param_3 = lVar4;
  return iVar2;
}

