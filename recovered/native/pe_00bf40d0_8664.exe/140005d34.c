/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140005d34 */

void FUN_140005d34(longlong param_1,uint param_2,char param_3)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  undefined1 auStack_78 [40];
  undefined4 local_50 [2];
  undefined **local_48;
  longlong local_40 [5];
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  *(uint *)(param_1 + 0x10) = param_2 & 0x17;
  uVar2 = param_2 & 0x17 & *(uint *)(param_1 + 0x14);
  if (uVar2 != 0) {
    if (param_3 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_14008c800((longlong *)0x0,(byte *)0x0);
    }
    pcVar1 = "ios_base::failbit set";
    if ((uVar2 & 2) == 0) {
      pcVar1 = "ios_base::eofbit set";
    }
    pcVar3 = "ios_base::badbit set";
    if ((uVar2 & 4) == 0) {
      pcVar3 = pcVar1;
    }
    local_48 = FUN_140005fab();
    local_50[0] = 1;
    FUN_140005de2(local_40,pcVar3,(undefined8 *)local_50);
                    /* WARNING: Subroutine does not return */
    FUN_14008c800(local_40,&DAT_140121678);
  }
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStack_78);
}

