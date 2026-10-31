/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022c230 */

void FUN_1022c230(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  BOOLEAN BVar3;
  DWORD DVar4;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  DVar4 = GetCurrentThreadId();
  if ((*param_1 & 0xfffffeff) == 1) {
    if (param_1[10] != DVar4) {
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 2));
      param_1[10] = DVar4;
    }
    param_1[0xb] = param_1[0xb] + 1;
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  if (param_2 == (uint *)0x0) {
    if (param_1[10] != DVar4) {
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 2));
    }
  }
  else if (((int)param_2[1] < 0) || ((*param_2 == 0 && param_2[1] == 0 && ((int)param_2[2] < 1)))) {
    if ((param_1[10] != DVar4) &&
       (BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)(param_1 + 2)), BVar3 == '\0'))
    goto LAB_1022c33a;
  }
  else {
    do {
      FUN_1022c810(&local_18);
      uVar1 = param_2[1];
      if (((int)uVar1 <= (int)local_14) &&
         ((((int)uVar1 < (int)local_14 || (*param_2 <= local_18)) &&
          ((local_18 != *param_2 || ((local_14 != uVar1 || ((int)param_2[2] <= local_10))))))))
      goto LAB_1022c33a;
    } while ((param_1[10] != DVar4) &&
            (BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)(param_1 + 2)), BVar3 == '\0'));
  }
  uVar2 = param_1[0xb];
  uVar1 = uVar2 + 1;
  param_1[0xb] = uVar1;
  if ((int)uVar1 < 2) {
    param_1[10] = DVar4;
  }
  else if ((*param_1 & 0x100) == 0) {
    param_1[0xb] = uVar2;
    if (param_2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_102283e0();
    }
LAB_1022c33a:
    if (*param_2 != 0 || param_2[1] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_102283e0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

