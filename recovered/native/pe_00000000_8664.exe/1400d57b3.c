/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d57b3 */

void FUN_1400d57b3(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FUN_1400d30d4();
  plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0x78) + 8);
                    /* WARNING: Could not recover jumptable at 0x0001400d57db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x50))(plVar1,0,1,lVar2 + 0x50);
  return;
}

