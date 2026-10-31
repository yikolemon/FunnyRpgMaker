/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d0511 */

char FUN_1800d0511(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 ****ppppuVar4;
  uint uVar5;
  undefined8 ***local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong uStack_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_180117f98();
  FUN_18013309a(param_1,0);
  iVar1 = DAT_180417e30;
  iVar3 = FUN_18011837d("recording");
  local_78 = (undefined8 ****)0x0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0xf;
  if (iVar1 == iVar3) {
    FUN_180017ca0(&local_78,&DAT_18035f203,0xf);
  }
  else {
    FUN_1800cfd0c(param_2,&local_50);
    FUN_180004c8c(&local_78);
    local_68 = local_40;
    uStack_60 = uStack_38;
    local_78 = local_50;
    uStack_70 = CONCAT44(uStack_44,uStack_48);
    local_40 = 0;
    uStack_38 = 0xf;
    local_50 = (undefined8 ****)((ulonglong)local_50 & 0xffffffffffffff00);
    FUN_180001ef2(&local_50);
  }
  FUN_180159bbb(DAT_1802bb8d8,DAT_1802ac570);
  uVar5 = FUN_18015aacb(DAT_1802bb8dc);
  local_50 = (undefined8 ****)(ulonglong)uVar5;
  ppppuVar4 = (undefined8 ****)local_78;
  if (uStack_60 < 0x10) {
    ppppuVar4 = &local_78;
  }
  cVar2 = FUN_180134257(ppppuVar4,&local_50);
  if (cVar2 != '\0') {
    DAT_180417e30 = FUN_18011837d("recording");
  }
  FUN_180119893(0,DAT_1802bb8e0);
  local_50 = (undefined8 ****)0x0;
  cVar2 = FUN_180134257(&DAT_18035f1eb);
  if (cVar2 != '\0') {
    *param_2 = 0;
    DAT_180417e30 = 0;
  }
  if (iVar1 == iVar3) {
    FUN_1800d0718(&local_50);
    cVar2 = local_50._4_1_;
    if (local_50._4_1_ == '\x01') {
      *param_2 = (undefined4)local_50;
      FUN_1800d0016(param_2);
      FUN_1800d01e6(param_2);
      DAT_180417e30 = 0;
    }
  }
  else {
    cVar2 = '\0';
  }
  FUN_18011834f();
  FUN_180001ef2(&local_78);
  return cVar2;
}

