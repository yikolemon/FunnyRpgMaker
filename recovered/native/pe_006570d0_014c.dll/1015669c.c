/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1015669c */

undefined4
FUN_1015669c(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
            float param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  float local_28;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  float local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_28;
  if (0.0 < param_5) {
    FUN_10131ed3();
  }
  iVar1 = DAT_1039d74c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  local_24 = *(undefined4 *)(*(int *)(iVar1 + 0x14cc) + 0x17c);
  iVar2 = FUN_100fcb2d();
  iVar1 = DAT_1039d74c;
  local_28 = param_5 * *(float *)(iVar2 + 0x50);
  if (0.0 < param_5) {
    *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
    *(float *)(*(int *)(iVar1 + 0x14cc) + 0x17c) =
         *(float *)(*(int *)(iVar1 + 0x14cc) + 0x17c) - local_28;
  }
  FUN_10113358(param_1);
  fVar4 = (float10)FUN_10111f20();
  local_20 = (float)fVar4;
  local_18 = local_28 + local_28 + local_20;
  local_1c = 0;
  uVar3 = FUN_10133727("##SelectableScale",param_3,param_4,&local_1c);
  FUN_10113568();
  iVar1 = DAT_1039d74c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  *(undefined4 *)(*(int *)(iVar1 + 0x14cc) + 0x180) = local_24;
  FUN_10114a0e(0,0);
  FUN_1012d079(param_2,0);
  if (DAT_10388d00 == (local_14 ^ (uint)&local_28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

