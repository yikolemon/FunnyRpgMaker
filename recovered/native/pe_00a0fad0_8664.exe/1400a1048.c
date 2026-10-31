/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a1048 */

void FUN_1400a1048(char *param_1)

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
  FUN_14000169c(local_30,"Clear: FileWriter not in buffer mode");
  FUN_14008cc42(local_68,local_30);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_68,&DAT_1401a57a0);
}

