/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049cfb8 */

uint * FUN_0049cfb8(void)

{
  LPWCH pWVar1;
  wchar_t *pwVar2;
  uint *puVar3;
  uint uVar4;
  
  pWVar1 = GetEnvironmentStringsW();
  if (pWVar1 == (LPWCH)0x0) {
    return (uint *)0x0;
  }
  pwVar2 = find_end_of_double_null_terminated_sequence(pWVar1);
  uVar4 = (int)pwVar2 - (int)pWVar1 & 0xfffffffe;
  puVar3 = FUN_00495f50(uVar4);
  if (puVar3 != (uint *)0x0) {
    FUN_004878c0(puVar3,(uint *)pWVar1,uVar4);
  }
  FUN_00495f00((LPVOID)0x0);
  FreeEnvironmentStringsW(pWVar1);
  return puVar3;
}

