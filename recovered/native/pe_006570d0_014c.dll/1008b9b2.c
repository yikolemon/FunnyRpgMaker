/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008b9b2 */

void __thiscall FUN_1008b9b2(char *param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined1 local_5c [36];
  undefined1 local_38 [24];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_5c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c35f0;
  local_1c = ExceptionList;
  puVar1 = (uint *)(param_1 + 8);
  uVar2 = *puVar1;
  ExceptionList = &local_1c;
  *puVar1 = *puVar1 + 4;
  *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)(0xfffffffb < uVar2);
  if (*param_1 == '\x01') {
    local_20 = local_5c;
    FUN_1007a9e4(*(undefined4 *)(param_1 + 0xd4),param_2,4);
    ExceptionList = local_1c;
  }
  else {
    if (*(int *)(param_1 + 0x74) == 0) {
      FUN_10001f66("FileWriter not initialized");
      local_14 = 0;
      FUN_1007e814(local_38);
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_5c,&DAT_10367dd8);
    }
    local_20 = local_5c;
    FUN_1007e6c8(param_2,4,0);
    ExceptionList = local_1c;
  }
  return;
}

