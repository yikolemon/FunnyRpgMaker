/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f4747 */

int FUN_101f4747(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_40 [11];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)local_40;
  iVar2 = param_1[1];
  *(undefined4 **)(param_2 + 0x22c) = param_1;
  *(undefined1 *)(param_2 + 0x229) = 0;
  iVar3 = 0;
  if ((*(int *)(param_2 + 0x70) == 0) || (*(int *)(param_2 + 0x74) == 0)) goto LAB_101f4870;
  _memset((void *)(param_2 + 0xb8),0,0x16c);
  *(undefined4 *)(param_2 + 0x180) = 7;
  *(undefined4 *)(param_2 + 0x184) = 1;
  *(undefined4 *)(param_2 + 0x204) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x20c) = 0xf5c;
  *(undefined4 *)(param_2 + 0x17c) = 0x27a000;
  *(int *)(param_2 + 0x224) = param_2;
  *(undefined4 *)(param_2 + 0x244) = param_3;
  *(undefined4 *)(param_2 + 0x248) = param_4;
  if (*(char *)(param_1 + 8) == '\0') {
    iVar3 = 0x61;
  }
  else {
    iVar3 = param_1[0x184] + 1;
  }
  local_40[0] = iVar2;
  iVar1 = FUN_101f4c1f(param_2 + 0xb8,*param_1,iVar3,*(undefined2 *)(param_2 + 0xac),
                       *(undefined2 *)(param_2 + 0xae));
  iVar2 = local_40[0];
  iVar4 = 0;
  iVar3 = iVar4;
  if (((iVar1 == 0) &&
      (iVar3 = FUN_101c461e(local_40[0],*(int *)(param_2 + 0x70) + param_1[3]), iVar3 == 0)) &&
     (iVar3 = FUN_101c4b69(iVar2,*(undefined4 *)(param_2 + 0x74)), iVar3 == 0)) {
    iVar3 = FUN_101f4caf(*(undefined4 *)(iVar2 + 0x24));
    FUN_101c4c66(iVar2);
    if (iVar3 == 0) {
      *(byte *)(param_2 + 0xb8) = *(byte *)(param_2 + 0xb8) & 0xfe;
      iVar2 = *(int *)(param_2 + 0x210);
      if (iVar2 < 0) {
        iVar2 = -iVar2;
LAB_101f48cf:
        *(int *)(param_2 + 0x210) = iVar2;
      }
      else if (iVar2 == 0) {
        iVar2 = 0x3ade68b1;
        goto LAB_101f48cf;
      }
      if (1000 < *(uint *)(param_2 + 0x180)) {
        *(undefined4 *)(param_2 + 0x180) = 7;
      }
      iVar3 = iVar4;
      if (1000 < *(uint *)(param_2 + 0x184)) {
        *(undefined4 *)(param_2 + 0x184) = 1;
      }
    }
  }
  FUN_101f4f5e();
  FUN_101f4f75();
LAB_101f4870:
  if (DAT_10388d00 != (local_14 ^ (uint)local_40)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar3;
}

