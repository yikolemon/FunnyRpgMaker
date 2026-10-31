/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001296b */

undefined8 FUN_18001296b(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  char *pcVar5;
  uint in_stack_fffffffffffffe70;
  undefined1 local_180 [56];
  undefined8 local_148;
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  char local_90;
  undefined1 local_88 [16];
  int local_78 [4];
  undefined1 local_68 [32];
  char local_48;
  undefined8 local_40;
  char local_35;
  undefined1 local_32;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_40 = param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c
              ) < DAT_180417520) {
    FUN_18023d500(&DAT_180417520);
    if (DAT_180417520 == -1) {
      FUN_180012667(local_78);
      FUN_18001313c(&DAT_1804174f0,local_78);
      FUN_180001ef2(local_78);
      FUN_18023d710(FUN_1800131ec);
      _Init_thread_footer(&DAT_180417520);
    }
  }
  FUN_180044980(&DAT_1803fd440);
  cVar3 = FUN_1800132ae(&DAT_1804174f0);
  if (cVar3 != '\0') {
    puVar1 = param_2 + 2;
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    cVar3 = FUN_180015d82(&DAT_1804174f0,param_2,*(undefined4 *)puVar1);
    if (cVar3 != '\0') {
      FUN_1800133b0(&DAT_1804174f0,local_b0);
      local_35 = local_90;
      if (local_90 == '\x01') {
        local_148 = 0;
        FUN_18001347a(local_88,local_b0,local_180,1,0,in_stack_fffffffffffffe70 & 0xffffff00);
        uVar4 = FUN_1800136a6(local_88,"code");
        local_78[0] = 0;
        FUN_180057604(&DAT_1802b0ea8,uVar4);
        iVar2 = local_78[0];
        pcVar5 = (char *)FUN_1800136a6(local_88,"result");
        if (iVar2 == 200) {
          FUN_1800136fa(local_78,pcVar5);
          local_48 = '\0';
          FUN_180013818(local_40,local_78);
          if (local_48 == '\x01') {
            FUN_180001ef2(local_68);
          }
          FUN_1800137c6(local_78);
        }
        else {
          FUN_180013990(local_78,9);
          if (*pcVar5 == '\x03') {
            local_32 = 1;
            FUN_180017024(pcVar5,local_d0);
          }
          else {
            local_32 = 1;
            FUN_1800139e8(pcVar5,local_d0,0xffffffff,0x20,0,0);
          }
          local_31 = 1;
          FUN_180013bfa(local_68,local_d0);
          FUN_180013818(local_40,local_78);
          if (local_48 == '\x01') {
            FUN_180001ef2(local_68);
          }
          FUN_1800137c6(local_78);
          local_31 = 0;
          FUN_180001ef2(local_d0);
          local_32 = 0;
        }
        FUN_1800137c6(local_88);
      }
      if (local_90 == '\x01') {
        FUN_180001ef2(local_b0);
      }
      if (local_35 != '\0') goto LAB_180012c09;
    }
  }
  FUN_180013da0(local_40);
LAB_180012c09:
  FUN_18023d6e0(&DAT_1803fd440);
  return local_40;
}

