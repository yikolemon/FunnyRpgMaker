/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e1d04 */

undefined8 FUN_1801e1d04(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  *(uint *)(param_1 + 0x40) = (uint)*(ushort *)(param_2 + 0x68);
  iVar2 = FUN_1801cc871(param_2,0x756e6963);
  if (iVar2 == 0) {
    FUN_1801e327b(param_1,param_2);
    FUN_1801e35cf(param_1,param_2);
    FUN_1801e3a3a(param_1);
  }
  *(undefined8 *)(param_2 + 0x88) = uVar1;
  return 0;
}

