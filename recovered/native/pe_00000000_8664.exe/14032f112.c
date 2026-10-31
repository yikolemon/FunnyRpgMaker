/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032f112 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14032f112(longlong param_1,longlong param_2,char param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x2acd) & 4) != 0) {
    FUN_14030f4ba(&DAT_14058e520,*(undefined8 *)(param_2 + 8),param_3);
  }
  if (*(longlong *)(param_2 + 0x4c0) == 0) {
    *(undefined4 *)(param_2 + 0x4d0) = 0;
  }
  else {
    uVar1 = 0;
    if (param_3 == '\0') {
      uVar1 = *(undefined4 *)(param_2 + 0x4d0);
    }
    FUN_140331fe5(*(longlong *)(param_2 + 0x4c0),param_2,uVar1);
  }
  *(undefined1 *)(param_2 + 0x10c) = 0;
  *(byte *)(param_2 + 0x495) = *(byte *)(param_2 + 0x495) & 0xf8;
  FUN_1403321db(&local_28,param_2 + 0x70,*(undefined8 *)(param_2 + 0x48));
  *(undefined8 *)(param_2 + 0x70) = local_28;
  *(undefined8 *)(param_2 + 0x68) = local_28;
  if (ram0x000140613b10 == (local_20 ^ (ulonglong)auStack_48)) {
    FUN_14032e99f();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_20 ^ (ulonglong)auStack_48);
}

