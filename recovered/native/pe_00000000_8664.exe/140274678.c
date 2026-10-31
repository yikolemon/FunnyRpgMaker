/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140274678 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001402746a0 */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_140274678(int *param_1,undefined8 param_2)

{
  uint uVar1;
  char *pcVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  if (*param_1 == 1) {
    uVar1 = param_1[1] - 2;
    if (uVar1 < 5) {
      uVar4 = *(undefined4 *)("" + (ulonglong)uVar1 * 4);
      bVar3 = DAT_1404cbc8c + 0x8c;
      DAT_1404cbc8c = DAT_1404cbc8c + '\x18';
      pcVar2 = (char *)(unaff_RBX + 0x180 + unaff_RBP);
      *pcVar2 = *pcVar2 + (char)((ulonglong)param_2 >> 8) + (0x73 < bVar3);
      pcVar2 = (char *)(unaff_RBX + 0x1800c + unaff_RBP * 8);
      *pcVar2 = *pcVar2 + (char)uVar4 + -0x74;
      DAT_1404cbc8c = DAT_1404cbc8c + -0x74;
      in((short)param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    }
    if (param_1[1] - 0x1dU < 2) {
      return 5;
    }
  }
  uVar4 = FUN_140274733(param_1,0xffffffffffffffff);
  return uVar4;
}

