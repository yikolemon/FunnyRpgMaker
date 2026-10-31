/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101affd5 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101affd5(void)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  char *local_5c;
  char *local_58;
  char *local_54;
  undefined4 local_50;
  float local_4c;
  char *local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char local_30 [32];
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_5c;
  local_5c = "Progress Bars";
  cVar1 = FUN_10147d77();
  if (cVar1 != '\0') {
    local_54 = "Widgets/Progress Bars";
    local_58 = (char *)0x8a5;
    local_5c = "imgui_demo.cpp";
    FUN_101032c6();
    local_48 = (char *)(DAT_1038ab6c * DAT_102b8e90);
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    iVar2 = FUN_1010330d();
    _DAT_103a4028 = (float)local_48 * *(float *)(iVar2 + 0x18) + _DAT_103a4028;
    fVar4 = DAT_102b8c74;
    if ((DAT_102b8c74 <= _DAT_103a4028) || (fVar4 = DAT_10302970, _DAT_103a4028 <= DAT_10302970)) {
      DAT_1038ab6c = -DAT_1038ab6c;
      _DAT_103a4028 = fVar4;
    }
    fVar4 = DAT_1028b430;
    if (_DAT_103a4028 <= DAT_1028b430) {
      fVar4 = _DAT_103a4028;
    }
    local_5c = (char *)(~-(uint)(_DAT_103a4028 < 0.0) & (uint)fVar4);
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    local_30[0] = '\0';
    local_30[1] = '\0';
    local_30[2] = '\0';
    local_30[3] = '\0';
    local_30[4] = '\0';
    local_30[5] = '\0';
    local_30[6] = '\0';
    local_30[7] = '\0';
    local_54 = (char *)0x0;
    local_58 = local_30;
    local_48 = local_5c;
    FUN_1013125a();
    iVar2 = FUN_100fcb2d();
    local_58 = *(char **)(iVar2 + 100);
    local_5c = (char *)0x0;
    FUN_10114a0e();
    local_5c = "Progress Bar";
    FUN_1012d08c();
    local_54 = (char *)(int)((float)local_48 * _DAT_10302974);
    local_50 = 0x6d9;
    local_58 = "%d/%d";
    local_5c = local_30;
    FUN_101b5fc7();
    local_38 = 0;
    local_5c = local_48;
    local_58 = (char *)&local_38;
    local_54 = local_30;
    FUN_1013125a();
    local_38 = 0;
    fVar3 = (float10)FUN_10103354();
    local_4c = (float)fVar3;
    local_5c = (char *)((uint)local_4c ^ _DAT_1028f620);
    local_54 = "Searching..";
    local_58 = (char *)&local_38;
    FUN_1013125a();
    iVar2 = FUN_100fcb2d();
    local_58 = *(char **)(iVar2 + 100);
    local_5c = (char *)0x0;
    FUN_10114a0e();
    local_5c = "Indeterminate";
    FUN_1012d08c();
    FUN_10149387();
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&local_5c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

