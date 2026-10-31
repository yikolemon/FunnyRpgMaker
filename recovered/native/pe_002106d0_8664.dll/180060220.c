/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180060220 */

undefined8 FUN_180060220(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  char *local_58;
  undefined4 local_50;
  char *local_48;
  char *local_40;
  undefined8 local_38;
  undefined *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = &DAT_18035f747;
  lVar4 = *(longlong *)*param_1;
  lVar1 = ((longlong *)*param_1)[1];
  if (lVar4 != lVar1) {
    bVar3 = 0;
    do {
      if ((*(char *)(lVar4 + 0x10) == '\x01') && (*(char *)(lVar4 + 0x12) == '\x01')) {
        bVar2 = FUN_1800c45fe(lVar4);
        bVar3 = bVar3 | bVar2;
      }
      lVar4 = lVar4 + 0x18;
    } while (lVar4 != lVar1);
    if ((bVar3 & 1) != 0) {
      return 1;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2c) < DAT_180417808) && (FUN_18023d500(&DAT_180417808), DAT_180417808 == -1)) {
    FUN_180021e84(&DAT_180417610);
    FUN_18023d710(&LAB_18002260a);
    _Init_thread_footer(&DAT_180417808);
  }
  local_40 = "Failed to init {}";
  local_38 = 0x11;
  local_58 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
  ;
  local_50 = 0x50a;
  local_48 = "InitWolfRPGEditor()::(lambda)::operator()";
  FUN_1800b7668(DAT_1804177e8,&local_58,4,&local_40,&local_30);
  return 0;
}

