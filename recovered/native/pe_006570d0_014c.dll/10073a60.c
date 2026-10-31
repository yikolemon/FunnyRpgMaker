/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10073a60 */

void __thiscall FUN_10073a60(int param_1,uint param_2,char param_3)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [20];
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_28;
  *(uint *)(param_1 + 0xc) = param_2 & 0x17;
  uVar1 = param_2 & 0x17 & *(uint *)(param_1 + 0x10);
  if (uVar1 != 0) {
    if (param_3 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(0,0);
    }
    pcVar2 = "ios_base::failbit set";
    if ((uVar1 & 2) == 0) {
      pcVar2 = "ios_base::eofbit set";
    }
    pcVar3 = "ios_base::badbit set";
    if ((uVar1 & 4) == 0) {
      pcVar3 = pcVar2;
    }
    local_24 = FUN_10073ce1();
    local_28 = 1;
    FUN_10073af4(pcVar3,&local_28);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_20,&DAT_10367cf8);
  }
  if (DAT_10388d00 == (local_c ^ (uint)&local_28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

