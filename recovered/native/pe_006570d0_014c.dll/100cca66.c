/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cca66 */

undefined4 FUN_100cca66(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ce480;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100cc933();
  FUN_100446d6();
  local_14 = 0;
  iVar2 = FUN_100cd1f0(param_1);
  if (iVar2 != DAT_1039cc98) {
    cVar1 = FUN_100ccb74(param_1);
    if (cVar1 != '\0') {
      FUN_100cd2cc(&local_28,param_1);
      FUN_100cd264(local_28,local_24);
      FUN_100cd2cc(&local_28,param_1);
      FUN_100cd264(local_28,local_24);
      FUN_100cd4fe(&local_28,param_1);
      FUN_100cd496(local_28,local_24);
      uVar3 = 1;
      goto code_r0x100ccb32;
    }
  }
  uVar3 = 0;
code_r0x100ccb32:
  local_14 = 0xffffffff;
  FUN_1022c200(&DAT_10388cc8);
  ExceptionList = local_1c;
  return uVar3;
}

