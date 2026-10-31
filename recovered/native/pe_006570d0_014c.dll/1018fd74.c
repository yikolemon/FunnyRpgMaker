/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018fd74 */

int __thiscall FUN_1018fd74(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined2 *puVar2;
  
  if (*(int *)(param_1 + 0x290) == 0) {
    FUN_1018f313(param_1);
  }
  iVar1 = FUN_1018fdef(param_1,param_2,param_3,0);
  if (iVar1 != -1) {
    if (param_4 != 0) {
      FUN_10190088(iVar1,param_4);
    }
    if (*(char *)(param_1 + 0x41) == '\x01') {
      puVar2 = (undefined2 *)FUN_10190112(param_1,iVar1);
      FUN_1018ee1a(param_1,*(undefined4 *)(param_1 + 0x30),*puVar2,puVar2[1],puVar2[2],puVar2[3]);
    }
  }
  return iVar1;
}

