/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b8954 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800b8954(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  FUN_180044980(&DAT_1804178e0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c
              ) < DAT_180417b10) {
    FUN_18023d500(&DAT_180417b10);
    if (DAT_180417b10 == -1) {
      FUN_1800b8e90();
      _Init_thread_footer(&DAT_180417b10);
    }
  }
  lVar2 = DAT_180417950;
  if (DAT_180417b14 != '\0') {
    FUN_1800248c8(&DAT_180417950,&DAT_180417950,*(undefined8 *)(DAT_180417950 + 8));
    *(longlong *)(lVar2 + 8) = lVar2;
    *(longlong *)lVar2 = lVar2;
    *(longlong *)(lVar2 + 0x10) = lVar2;
    _DAT_180417958 = 0;
    FUN_180066c0a(&DAT_180417990);
    FUN_180066c0a(&DAT_1804179d0);
    FUN_1800b8f84(&DAT_180417960);
    puVar3 = (undefined8 *)FUN_1800b8fe8(&DAT_1804189d0,1);
    puVar1 = (undefined8 *)puVar3[1];
    for (puVar3 = (undefined8 *)*puVar3; puVar3 != puVar1; puVar3 = puVar3 + 8) {
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      local_80 = 3;
      if ((ulonglong)puVar3[7] < 0x10) {
        puVar4 = puVar3 + 4;
      }
      else {
        puVar4 = (undefined8 *)puVar3[4];
      }
      FUN_1800639cf(&local_78,puVar4,puVar3[6] + (longlong)puVar4,&local_98);
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_60 = 3;
      puVar4 = puVar3;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar4 = (undefined8 *)*puVar3;
      }
      FUN_1800639cf(local_a0,puVar4,puVar3[2] + (longlong)puVar4,&local_78);
      FUN_1800b9426(&DAT_180417960,&local_78,&local_98);
      FUN_180061ab8(&local_78);
      FUN_180061ab8(&local_98);
    }
    FUN_1800b95e4(&DAT_180417960);
    DAT_180417b14 = '\0';
  }
  FUN_18023d6e0(&DAT_1804178e0);
  return;
}

