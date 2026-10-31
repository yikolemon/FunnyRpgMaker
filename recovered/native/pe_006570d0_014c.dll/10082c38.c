/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10082c38 */

int __fastcall FUN_10082c38(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_c [3];
  undefined1 local_9;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)auStack_c;
  *(ulonglong *)(param_1 + 0x14) =
       CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 0x14) >> 0x20) + 1,
                (int)*(undefined8 *)(param_1 + 0x14) + 1);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    iVar2 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar2 = FUN_10082cd6();
    *(int *)(param_1 + 0xc) = iVar2;
  }
  if (iVar2 == -1) {
    iVar2 = -1;
  }
  else {
    local_9 = (undefined1)iVar2;
    puVar1 = *(undefined1 **)(param_1 + 0x24);
    if (puVar1 == *(undefined1 **)(param_1 + 0x28)) {
      FUN_1004cf34(puVar1,&local_9);
    }
    else {
      *puVar1 = local_9;
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    }
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 == 10) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      *(undefined4 *)(param_1 + 0x18) = 0;
      iVar2 = 10;
    }
  }
  if (DAT_10388d00 == (local_8 ^ (uint)auStack_c)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

