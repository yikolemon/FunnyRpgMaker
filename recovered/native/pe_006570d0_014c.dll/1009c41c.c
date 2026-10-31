/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009c41c */

void __fastcall FUN_1009c41c(char *param_1)

{
  undefined1 local_5c [36];
  undefined1 local_38 [24];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_5c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3d90;
  local_1c = ExceptionList;
  if (*param_1 != '\0') {
    if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xd4)) {
      *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd0);
    }
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    return;
  }
  ExceptionList = &local_1c;
  FUN_10001f66("Clear: FileWriter not in buffer mode");
  local_14 = 0;
  FUN_1007e814(local_38);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_5c,&DAT_10367dd8);
}

