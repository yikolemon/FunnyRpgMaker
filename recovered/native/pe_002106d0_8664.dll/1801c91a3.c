/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c91a3 */

void FUN_1801c91a3(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FUN_1801c68b0();
  plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0x78) + 8);
                    /* WARNING: Could not recover jumptable at 0x0001801c91cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x50))(plVar1,0,1,lVar2 + 0x50);
  return;
}

