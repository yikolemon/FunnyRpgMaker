/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1015650c */

undefined4 FUN_1015650c(undefined4 param_1,undefined4 param_2,float param_3,float param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EBX;
  float local_30;
  undefined4 local_2c;
  float local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_30;
  if (param_3 < DAT_1028b430) {
    FUN_10131ed3();
  }
  iVar3 = DAT_1039d74c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  local_2c = *(undefined4 *)(*(int *)(iVar3 + 0x14cc) + 0x148);
  iVar2 = FUN_100fcb2d();
  iVar3 = DAT_1039d74c;
  local_30 = (DAT_1028b430 - param_3) * *(float *)(iVar2 + 0x50);
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  *(float *)(*(int *)(iVar3 + 0x14cc) + 0x148) =
       *(float *)(*(int *)(iVar3 + 0x14cc) + 0x148) + local_30;
  iVar3 = FUN_100fcb2d();
  local_28 = *(float *)(iVar3 + 0x50);
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  iVar3 = FUN_100fcb2d();
  local_18 = CONCAT44(param_3 * local_28,param_3 * *(float *)(iVar3 + 0x4c));
  FUN_100fd3bc(0xb,&local_18);
  iVar3 = FUN_100fcb2d();
  FUN_100fd0a3(0xc,param_4 * *(float *)(iVar3 + 0x54));
  uVar1 = FUN_1012ff1a(param_1,param_2);
  FUN_100fd4c4(2);
  iVar3 = DAT_1039d74c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  *(float *)(*(int *)(iVar3 + 0x14cc) + 0x148) =
       local_30 + *(float *)(*(int *)(iVar3 + 0x14cc) + 0x148);
  *(undefined1 *)(*(int *)(iVar3 + 0x14cc) + 0xfb) = 1;
  *(undefined4 *)(*(int *)(iVar3 + 0x14cc) + 0x150) = local_2c;
  if (DAT_10388d00 == (local_10 ^ (uint)&local_30)) {
    return CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),0x100) >> 8),uVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

