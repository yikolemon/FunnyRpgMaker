/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008aa10 */

void FUN_14008aa10(longlong param_1,longlong param_2,int param_3)

{
  longlong local_res8;
  longlong local_res10 [2];
  longlong local_res20;
  
  *(undefined1 *)(param_1 + 0x71) = 0;
  *(undefined8 **)(param_1 + 0x18) = (undefined8 *)(param_1 + 8);
  *(undefined8 **)(param_1 + 0x38) = (undefined8 *)(param_1 + 0x28);
  *(undefined8 **)(param_1 + 0x20) = (undefined8 *)(param_1 + 0x10);
  *(undefined4 **)(param_1 + 0x50) = (undefined4 *)(param_1 + 0x48);
  *(bool *)(param_1 + 0x7c) = param_3 == 1;
  *(undefined8 **)(param_1 + 0x40) = (undefined8 *)(param_1 + 0x30);
  *(undefined4 **)(param_1 + 0x58) = (undefined4 *)(param_1 + 0x4c);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (param_2 != 0) {
    local_res8 = 0;
    local_res10[0] = 0;
    local_res20 = 0;
    _get_stream_buffer_pointers(param_2,&local_res8,local_res10,&local_res20);
    *(longlong *)(param_1 + 0x18) = local_res8;
    *(longlong *)(param_1 + 0x20) = local_res8;
    *(longlong *)(param_1 + 0x38) = local_res10[0];
    *(longlong *)(param_1 + 0x40) = local_res10[0];
    *(longlong *)(param_1 + 0x50) = local_res20;
    *(longlong *)(param_1 + 0x58) = local_res20;
  }
  *(longlong *)(param_1 + 0x80) = param_2;
  *(undefined8 *)(param_1 + 0x74) = DAT_14013cdd0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}

