/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016acc2 */

void FUN_18016acc2(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
  lVar2 = *(longlong *)(DAT_180419160 + 0x24f8);
  FUN_18016a90f(lVar1,lVar2 + 0x170);
  FUN_180195542(*(undefined8 *)(lVar2 + 0x1a0),*(undefined8 *)(lVar1 + 800),
                *(undefined2 *)
                 (*(longlong *)(lVar2 + 0x18) + 0x60 + (longlong)*(int *)(lVar2 + 0x74) * 0x74));
  return;
}

