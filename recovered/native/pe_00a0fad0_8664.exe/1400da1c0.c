/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400da1c0 */

void FUN_1400da1c0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  uint uVar2;
  char *pcVar3;
  undefined1 local_48 [16];
  undefined1 local_38 [48];
  
  *(uint *)(param_1 + 0x10) = param_2 & 0x17;
  uVar2 = param_2 & 0x17 & *(uint *)(param_1 + 0x14);
  if (uVar2 == 0) {
    return;
  }
  if ((uVar2 & 4) == 0) {
    pcVar3 = "ios_base::failbit set";
    if ((uVar2 & 2) == 0) {
      pcVar3 = "ios_base::eofbit set";
    }
  }
  else {
    pcVar3 = "ios_base::badbit set";
  }
  uVar1 = FUN_1400da1a0(local_48,1);
  FUN_14000aa9e(local_38,pcVar3,uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_38,&DAT_14017a158);
}

