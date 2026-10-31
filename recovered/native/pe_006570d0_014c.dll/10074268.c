/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10074268 */

void __thiscall FUN_10074268(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  *(bool *)(param_1 + 0x48) = param_3 == 1;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(int *)(param_1 + 0xc) = param_1 + 4;
  *(int *)(param_1 + 0x10) = param_1 + 8;
  *(int *)(param_1 + 0x1c) = param_1 + 0x14;
  *(int *)(param_1 + 0x20) = param_1 + 0x18;
  *(int *)(param_1 + 0x2c) = param_1 + 0x24;
  *(int *)(param_1 + 0x30) = param_1 + 0x28;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_2 != 0) {
    local_18 = 0;
    local_1c = 0;
    local_20 = 0;
    __get_stream_buffer_pointers(param_2,&local_18,&local_1c,&local_20);
    *(undefined4 *)(param_1 + 0xc) = local_18;
    *(undefined4 *)(param_1 + 0x10) = local_18;
    *(undefined4 *)(param_1 + 0x1c) = local_1c;
    *(undefined4 *)(param_1 + 0x20) = local_1c;
    *(undefined4 *)(param_1 + 0x2c) = local_20;
    *(undefined4 *)(param_1 + 0x30) = local_20;
  }
  *(int *)(param_1 + 0x4c) = param_2;
  uVar1 = DAT_1039cbbc;
  *(undefined4 *)(param_1 + 0x44) = DAT_1039cbc0;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (DAT_10388d00 == (local_14 ^ (uint)&local_20)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

