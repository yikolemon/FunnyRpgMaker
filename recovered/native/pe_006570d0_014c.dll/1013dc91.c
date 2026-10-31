/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1013dc91 */

undefined4
FUN_1013dc91(undefined8 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_28 [3];
  undefined1 uStack_25;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_1c;
  uint local_14;
  
  iVar3 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)auStack_28;
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  iVar4 = *(int *)(DAT_1039d74c + 0x254c);
  if (iVar4 != param_2) {
    FUN_101028d8();
  }
  local_20 = *(undefined4 *)(iVar1 + 0x144);
  local_24 = *(undefined4 *)(iVar1 + 0x148);
  *(undefined8 *)(iVar1 + 0x144) = *param_1;
  *(byte *)(iVar3 + 0x1e84) = *(byte *)(iVar3 + 0x1e84) | 0x20;
  local_1c = CONCAT44((float)((ulonglong)param_1[1] >> 0x20) - (float)((ulonglong)*param_1 >> 0x20),
                      (float)param_1[1] - (float)*param_1);
  uStack_25 = FUN_1013dd9a(param_3,0,param_4,param_5,&local_1c,param_6 | 0x8001000,param_7,param_8);
  FUN_10103c09(param_2);
  iVar2 = *(int *)(iVar3 + 0x1528);
  if (iVar2 != param_2 || iVar4 != param_2) {
    iVar4 = 0;
    if (iVar2 == param_2) {
      iVar4 = iVar2;
    }
    *(int *)(iVar3 + 0x254c) = iVar4;
  }
  *(undefined4 *)(iVar1 + 0x144) = local_20;
  *(undefined4 *)(iVar1 + 0x148) = local_24;
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_28)) {
    return CONCAT31((int3)((local_14 ^ (uint)auStack_28) >> 8),uStack_25);
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

