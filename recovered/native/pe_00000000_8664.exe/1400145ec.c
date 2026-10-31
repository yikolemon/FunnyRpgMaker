/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400145ec */

void FUN_1400145ec(longlong param_1,longlong param_2,int param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  *(bool *)(param_1 + 0x7c) = param_3 == 1;
  *(undefined1 *)(param_1 + 0x71) = 0;
  *(longlong *)(param_1 + 0x18) = param_1 + 8;
  *(longlong *)(param_1 + 0x20) = param_1 + 0x10;
  *(longlong *)(param_1 + 0x38) = param_1 + 0x28;
  *(longlong *)(param_1 + 0x40) = param_1 + 0x30;
  *(longlong *)(param_1 + 0x50) = param_1 + 0x48;
  *(longlong *)(param_1 + 0x58) = param_1 + 0x4c;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (param_2 != 0) {
    local_38 = 0;
    local_40 = 0;
    local_48 = 0;
    _get_stream_buffer_pointers(param_2,&local_38,&local_40,&local_48);
    *(undefined8 *)(param_1 + 0x18) = local_38;
    *(undefined8 *)(param_1 + 0x20) = local_38;
    *(undefined8 *)(param_1 + 0x38) = local_40;
    *(undefined8 *)(param_1 + 0x40) = local_40;
    *(undefined8 *)(param_1 + 0x50) = local_48;
    *(undefined8 *)(param_1 + 0x58) = local_48;
  }
  *(longlong *)(param_1 + 0x80) = param_2;
  *(undefined8 *)(param_1 + 0x74) = DAT_140f2a400;
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_68);
}

