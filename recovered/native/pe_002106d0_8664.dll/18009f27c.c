/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009f27c */

void FUN_18009f27c(char *param_1)

{
  undefined1 local_68 [56];
  undefined1 local_30 [32];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  if (*param_1 != '\0') {
    if (*(longlong *)(param_1 + 0x128) != *(longlong *)(param_1 + 0x130)) {
      *(longlong *)(param_1 + 0x130) = *(longlong *)(param_1 + 0x128);
    }
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    return;
  }
  FUN_180001e92(local_30,"Clear: FileWriter not in buffer mode");
  FUN_18007f584(local_68,local_30);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_68,&DAT_1803a64e0);
}

