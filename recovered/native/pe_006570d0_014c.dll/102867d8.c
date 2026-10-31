/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102867d8 */

void FUN_102867d8(int param_1,undefined2 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined2 *local_2c;
  int local_28;
  undefined2 *local_24;
  int local_20;
  undefined4 local_1c;
  char local_18;
  short *local_14;
  short local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  if (param_3 < 0) {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
    FUN_10273ea8();
    goto LAB_1028691f;
  }
  if (param_1 == 0) {
    param_1 = FUN_1027a3ec();
    if (param_1 != 0) goto LAB_10286846;
    local_10 = 0x2e;
    local_e = 0;
LAB_10286870:
    if (param_2 == (undefined2 *)0x0) {
      local_2c = (undefined2 *)0x0;
      local_28 = 0;
      local_24 = (undefined2 *)0x0;
      local_20 = 0;
      local_1c = 0;
      local_18 = '\0';
      allocate(param_3);
      local_14 = &local_10;
      iVar2 = call_win32_function<>(&local_14);
      if (iVar2 == 0) {
        FUN_1027a5b0();
        if (local_18 != '\0') {
          thunk_FUN_10274120(local_24);
        }
      }
      else if (local_18 != '\0') {
        thunk_FUN_10274120(local_24);
      }
      goto LAB_1028691f;
    }
    if (0 < param_3) {
      local_2c = param_2;
      *param_2 = 0;
      local_1c = 0;
      local_18 = '\0';
      local_14 = &local_10;
      local_28 = param_3;
      local_24 = param_2;
      local_20 = param_3;
      __crt_win32_buffer<wchar_t,__crt_win32_buffer_no_resizing>::
      call_win32_function<<lambda_33d632c04396b3de813369f94278cf6d>_>
                ((__crt_win32_buffer<wchar_t,__crt_win32_buffer_no_resizing> *)&local_2c,
                 (<lambda_33d632c04396b3de813369f94278cf6d> *)&local_14);
      goto LAB_1028691f;
    }
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
  }
  else {
    iVar2 = FUN_10286759(param_1);
    if (iVar2 != 0) {
LAB_10286846:
      local_10 = (short)param_1 + 0x40;
      local_e = 0x3a;
      local_c = 0x2e;
      local_a = 0;
      goto LAB_10286870;
    }
    puVar1 = (undefined4 *)FUN_10269012();
    *puVar1 = 0xf;
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0xd;
  }
  FUN_10273ea8();
LAB_1028691f:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

