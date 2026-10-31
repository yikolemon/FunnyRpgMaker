/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180197656 */

int FUN_180197656(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  int iVar1;
  undefined2 *puVar2;
  
  if (*(longlong *)(param_1 + 0x2b0) == 0) {
    FUN_180196b0f(param_1);
  }
  iVar1 = FUN_1801976e6(param_1,param_2,param_3,0);
  if (iVar1 != -1) {
    if (param_4 != 0) {
      FUN_1801979b0(param_1,iVar1,param_4);
    }
    if (*(char *)(param_1 + 0x51) == '\x01') {
      puVar2 = (undefined2 *)FUN_180197a3b(param_1,iVar1);
      FUN_180196606(param_1,*(undefined8 *)(param_1 + 0x38),*puVar2,puVar2[1],puVar2[2],puVar2[3]);
    }
  }
  return iVar1;
}

