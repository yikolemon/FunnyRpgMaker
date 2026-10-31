/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102104e8 */

int __fastcall FUN_102104e8(uint *param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = *param_1 + 1;
  if (param_1[1] < uVar5) {
    iVar3 = FUN_10210554(param_2);
    if (iVar3 != 0) {
      iVar4 = 0;
      goto LAB_1021054d;
    }
  }
  uVar1 = param_1[2];
  iVar4 = uVar5 * 0x10;
  *(undefined4 *)((uVar1 - 0x10) + iVar4) = 0;
  *(undefined4 *)((uVar1 - 4) + iVar4) = 0;
  uVar2 = *(uint *)((uVar1 - 0xc) + iVar4);
  if (uVar2 != 0) {
    _memset(*(void **)(iVar4 + uVar1 + -8),0,uVar2 >> 3);
  }
  iVar3 = 0;
  iVar4 = iVar4 + uVar1 + -0x10;
  *param_1 = uVar5;
LAB_1021054d:
  *param_3 = iVar4;
  return iVar3;
}

