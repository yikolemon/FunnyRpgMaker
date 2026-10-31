/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100605d0 */

undefined4 __fastcall FUN_100605d0(int *param_1)

{
  int iVar1;
  char **ppcVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  char *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c1a80;
  local_1c = ExceptionList;
  local_24 = "DrawMessage_V_20024";
  iVar5 = *(int *)*param_1;
  iVar1 = ((int *)*param_1)[1];
  ExceptionList = &local_1c;
  ppcVar2 = &local_24;
  if (iVar5 != iVar1) {
    bVar4 = 0;
    do {
      if ((*(char *)(iVar5 + 8) == '\x01') && (*(char *)(iVar5 + 10) == '\x01')) {
        local_14 = 0xffffffff;
        bVar3 = FUN_100bc568();
        bVar4 = bVar4 | bVar3;
      }
      iVar5 = iVar5 + 0xc;
    } while (iVar5 != iVar1);
    ppcVar2 = (char **)local_20;
    if ((bVar4 & 1) != 0) {
      ExceptionList = local_1c;
      return 1;
    }
  }
  local_20 = (undefined1 *)ppcVar2;
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039c928) &&
     (FUN_1022c0d0(&DAT_1039c928), DAT_1039c928 == -1)) {
    local_14 = 0;
    FUN_10021a06();
    FUN_1022c3a0(&LAB_1002210b);
    local_14 = 0xffffffff;
    FUN_1022c180(&DAT_1039c928);
  }
  local_14 = 0xffffffff;
  FUN_100b26fe("C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
               ,0x50a,"InitWolfRPGEditor()::(lambda)::operator()",4,"Failed to init {}",0x11,
               &local_24);
  ExceptionList = local_1c;
  return 0;
}

