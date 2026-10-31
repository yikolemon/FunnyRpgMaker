/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100683f4 */

void __fastcall FUN_100683f4(int *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_10060a06(param_1,*(undefined4 *)(*param_1 + 4));
    FUN_102283a0(*param_1,0x18);
  }
  return;
}

