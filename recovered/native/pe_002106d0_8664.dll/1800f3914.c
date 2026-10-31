/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f3914 */

void FUN_1800f3914(void)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong local_238 [7];
  longlong *local_200;
  undefined1 local_f0 [16];
  ulonglong *local_e0;
  int *local_d8;
  char *local_d0;
  undefined1 local_c0 [16];
  longlong local_b0 [2];
  longlong *local_a0;
  ulonglong local_98;
  longlong **local_90;
  int local_88;
  ulonglong local_80;
  undefined1 local_78 [32];
  undefined8 ***local_58;
  int local_50;
  char local_49 [9];
  
  local_49[1] = -2;
  local_49[2] = -1;
  local_49[3] = -1;
  local_49[4] = -1;
  local_49[5] = -1;
  local_49[6] = -1;
  local_49[7] = -1;
  local_49[8] = -1;
  FUN_1800f3dc6(local_238,&local_90);
  FUN_18006a75c(local_c0,local_238);
  if (local_200 != (longlong *)0x0) {
    (**(code **)(*local_200 + 0x20))(local_200,local_200 != local_238);
  }
  FUN_1800ee6d6(local_b0);
  local_a0 = local_b0;
  FUN_1800f3e4e(local_238);
  lVar1 = 0;
  while ((lVar1 != 0xc &&
         (local_50 = *(int *)((longlong)&DAT_1802dc7fc + lVar1), DAT_180418d49 != '\x01'))) {
    local_49[0] = '\0';
    local_e0 = &local_98;
    local_d8 = &local_50;
    local_d0 = local_49;
    FUN_1800f3e9a(&local_90,&local_e0);
    FUN_18005ba34(&local_90);
    if (local_58 != (longlong ***)0x0) {
      (*(code *)(*local_58)[4])(local_58,local_58 != &local_90);
    }
    if (local_49[0] != '\0') {
      FUN_180001e92(&local_e0,(&PTR_DAT_1802dc450)[local_50]);
      uVar2 = 0;
      while ((uVar2 < local_98 && (DAT_180418d49 == '\0'))) {
        local_88 = local_50;
        local_90 = &local_a0;
        local_80 = uVar2;
        FUN_180003216(local_78,&local_e0);
        FUN_1800f3f34(local_238,local_f0,&local_90,0);
        FUN_180001ef2(local_78);
        FUN_1800f408a(local_f0);
        uVar2 = uVar2 + 1;
      }
      FUN_180001ef2(&local_e0);
    }
    lVar1 = lVar1 + 4;
  }
  FUN_1800f40c0(local_238);
  FUN_1800f415a(local_238);
  FUN_1800ee742(local_b0,local_b0,*(undefined8 *)(local_b0[0] + 8));
  thunk_FUN_1802464a0(local_b0[0],0x40);
  FUN_18006b556(local_c0);
  return;
}

