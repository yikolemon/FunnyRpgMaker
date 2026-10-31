/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007422a */

void FUN_18007422a(longlong param_1,uint param_2,char param_3)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_78;
  *(uint *)(param_1 + 0x10) = param_2 & 0x17;
  uVar2 = param_2 & 0x17 & *(uint *)(param_1 + 0x14);
  if (uVar2 != 0) {
    if (param_3 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_18026d5b0(0,0);
    }
    pcVar1 = "ios_base::failbit set";
    if ((uVar2 & 2) == 0) {
      pcVar1 = "ios_base::eofbit set";
    }
    pcVar3 = "ios_base::badbit set";
    if ((uVar2 & 4) == 0) {
      pcVar3 = pcVar1;
    }
    local_48 = FUN_18007448d();
    local_50 = 1;
    FUN_1800742d8(local_40,pcVar3);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_40,&DAT_1803a63f8);
  }
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_78);
}

