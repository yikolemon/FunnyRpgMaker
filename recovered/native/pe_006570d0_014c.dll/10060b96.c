/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10060b96 */

void __fastcall FUN_10060b96(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != *(int *)(param_1 + 8)) {
    FUN_10060d3a(iVar1);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x30;
    return;
  }
  FUN_10060bc0(iVar1);
  return;
}

