/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10117f03 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10117f03(char *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  float fVar8;
  undefined4 local_38;
  float local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  uint local_14;
  
  iVar3 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_38;
  if ((param_1 != (char *)0x0) &&
     ((iVar7 = 0, *(int *)(DAT_1039d74c + 0x2270) == -1 ||
      (iVar5 = _strcmp(param_1,(char *)(DAT_1039d74c + 0x2274)), iVar5 != 0)))) goto LAB_101180ba;
  iVar5 = *(int *)(iVar3 + 0x22b8);
  iVar2 = *(int *)(iVar3 + 0x22d0);
  local_24 = *(float *)(iVar3 + 0x2298);
  fStack_20 = *(float *)(iVar3 + 0x229c);
  fStack_1c = *(float *)(iVar3 + 0x22a0);
  fStack_18 = *(float *)(iVar3 + 0x22a4);
  fVar8 = (fStack_18 - fStack_20) * (fStack_1c - local_24);
  iVar7 = 0;
  if (*(float *)(iVar3 + 0x22c8) <= fVar8 && fVar8 != *(float *)(iVar3 + 0x22c8)) goto LAB_101180ba;
  *(uint *)(iVar3 + 0x22c0) = param_2;
  *(int *)(iVar3 + 0x22cc) = iVar5;
  *(float *)(iVar3 + 0x22c8) = fVar8;
  *(bool *)(iVar3 + 0x2295) = iVar2 == iVar5;
  if ((iVar2 == iVar5) && (((*(uint *)(iVar3 + 0x2254) | param_2) & 0x800) == 0)) {
    if (*(int *)(iVar3 + 0x22bc) == 0) {
      FUN_1011818d(&local_24);
    }
    else {
      uVar6 = FUN_1010ad03(*(int *)(iVar3 + 0x22bc));
      local_34 = *(float *)(iVar3 + 0x2298) + _DAT_102b8e10;
      fStack_30 = *(float *)(iVar3 + 0x229c) + _UNK_102b8e14;
      fStack_2c = *(float *)(iVar3 + 0x22a0) + _UNK_102b8e18;
      fStack_28 = *(float *)(iVar3 + 0x22a4) + _UNK_102b8e1c;
      local_38 = *(undefined4 *)(iVar3 + 0xd9c);
      uVar6 = FUN_100fe900(uVar6);
      FUN_101180df(uVar6,&local_34,local_38);
    }
  }
  iVar1 = iVar3 + 0x2260;
  *(int *)(iVar3 + 0x22d4) = *(int *)(iVar3 + 4);
  if (((*(byte *)(iVar3 + 0x2254) & 0x10) == 0) || (*(int *)(iVar3 + 0x225c) != -1)) {
    if (iVar2 != iVar5) goto LAB_10118080;
    bVar4 = FUN_1010b10c(*(undefined4 *)(iVar3 + 0x225c));
    bVar4 = bVar4 ^ 1;
  }
  else if (iVar2 == iVar5) {
    bVar4 = *(int *)(iVar3 + 0x2258) < *(int *)(iVar3 + 4);
  }
  else {
LAB_10118080:
    bVar4 = 0;
  }
  iVar7 = 0;
  if (bVar4 != 0) {
    iVar7 = iVar1;
  }
  if ((param_2 & 0x400) != 0) {
    iVar7 = iVar1;
  }
  *(byte *)(iVar3 + 0x2296) = bVar4;
  if ((bVar4 != 0) && (iVar7 = iVar1, (*(byte *)(iVar3 + 0x27b4) & 2) != 0)) {
    FUN_100f99e6("[dragdrop] AcceptDragDropPayload(): 0x%08X: payload delivery\n",
                 *(undefined4 *)(iVar3 + 0x22b8));
  }
LAB_101180ba:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_38)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar7;
}

