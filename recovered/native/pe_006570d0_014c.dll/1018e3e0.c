/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018e3e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __fastcall FUN_1018e3e0(void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined1 *local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_1c;
  local_14 = &LAB_10195fd0;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_18;
  *(undefined4 *)((int)param_1 + 0x38) = 0;
  *(undefined4 *)((int)param_1 + 0x34) = 0;
  *(undefined4 *)((int)param_1 + 0x3c) = 0;
  *(undefined4 *)((int)param_1 + 0x44) = 0;
  *(undefined4 *)((int)param_1 + 0x48) = 0;
  *(undefined4 *)((int)param_1 + 0x4c) = 0;
  *(undefined4 *)((int)param_1 + 0x50) = 0;
  *(undefined4 *)((int)param_1 + 0x50) = 0;
  *(undefined4 *)((int)param_1 + 0x54) = 0;
  *(undefined4 *)((int)param_1 + 0x58) = 0;
  *(undefined4 *)((int)param_1 + 0x5c) = 0;
  *(undefined4 *)((int)param_1 + 100) = 0;
  *(undefined4 *)((int)param_1 + 0x60) = 0;
  *(undefined4 *)((int)param_1 + 0x68) = 0;
  local_10 = 1;
  _memset((void *)((int)param_1 + 0x6c),0,0x210);
  *(undefined4 *)((int)param_1 + 0x288) = 0;
  *(undefined4 *)((int)param_1 + 0x284) = 0;
  *(undefined4 *)((int)param_1 + 0x28c) = 0;
  local_10 = 2;
  _memset(param_1,0,0x2c8);
  uVar3 = _UNK_103013cc;
  uVar2 = _UNK_103013c8;
  uVar1 = _UNK_103013c4;
  *(undefined4 *)((int)param_1 + 8) = _DAT_103013c0;
  *(undefined4 *)((int)param_1 + 0xc) = uVar1;
  *(undefined4 *)((int)param_1 + 0x10) = uVar2;
  *(undefined4 *)((int)param_1 + 0x14) = uVar3;
  *(undefined4 *)((int)param_1 + 0x18) = 0x2000;
  *(undefined1 *)((int)param_1 + 0x41) = 0;
  *(undefined4 *)((int)param_1 + 0x27c) = 1;
  *(undefined4 *)((int)param_1 + 0x280) = 1;
  *unaff_FS_OFFSET = local_18;
  return param_1;
}

