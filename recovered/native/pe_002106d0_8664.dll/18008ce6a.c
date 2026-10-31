/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008ce6a */

void FUN_18008ce6a(char *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined1 local_68 [56];
  undefined1 local_30 [32];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  *(ulonglong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + (param_3 & 0xffffffff);
  if (*param_1 == '\x01') {
    FUN_18007b4d2(param_1 + 0x128,*(undefined8 *)(param_1 + 0x130),param_2);
    return;
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_18007f454(param_1 + 0x20,param_2,param_3 & 0xffffffff);
    return;
  }
  FUN_180001e92(local_30,"FileWriter not initialized");
  FUN_18007f584(local_68,local_30);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_68,&DAT_1803a64e0);
}

