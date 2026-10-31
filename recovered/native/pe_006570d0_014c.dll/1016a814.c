/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016a814 */

undefined4 * FUN_1016a814(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 ****ppppuVar5;
  undefined4 *local_70;
  int *piStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 ***local_58 [4];
  undefined4 local_48;
  uint local_44;
  int local_40;
  undefined4 *local_3c;
  int *piStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_70;
  local_18 = &LAB_10180090;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = 0;
  param_1[1] = 0;
  local_70 = (undefined4 *)0x0;
  piStack_6c = (int *)0x0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_60 = 0xf00000000;
  local_14 = 1;
  piStack_38 = (int *)param_2[4];
  local_3c = param_2;
  if (0xf < (uint)param_2[5]) {
    local_3c = (undefined4 *)*param_2;
  }
  cVar3 = FUN_10018750("data:image/png;base64,");
  if (cVar3 != '\0') {
    FUN_100729e8(param_2,0x16,0xffffffff,&local_3c);
    local_14 = 3;
    ppppuVar5 = local_58;
    if (0xf < local_44) {
      ppppuVar5 = (undefined4 ****)local_58[0];
    }
    FUN_1016e482(&local_3c,ppppuVar5,local_48);
    local_14 = 4;
    FUN_10004e60();
    local_60 = CONCAT44(uStack_28,local_2c);
    local_70 = local_3c;
    piStack_6c = piStack_38;
    uStack_68 = uStack_34;
    uStack_64 = uStack_30;
    local_2c = 0;
    uStack_28 = 0xf;
    local_3c = (undefined4 *)((uint)local_3c & 0xffffff00);
    local_14 = 0xffffffff;
    FUN_10001fee();
    FUN_10001fee();
  }
  local_58[0] = (undefined4 ***)0x0;
  local_24 = 0;
  local_14 = 1;
  iVar4 = FUN_1016aa3a(local_58,&local_24);
  if (iVar4 != 0) {
    local_40 = iVar4;
    FUN_1016aaaa(&local_3c,iVar4,local_58[0],local_24);
    local_14 = 2;
    FUN_1002265a(&local_3c);
    piVar2 = piStack_38;
    local_14 = 0xffffffff;
    if (piStack_38 != (int *)0x0) {
      LOCK();
      piVar1 = piStack_38 + 1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*piStack_38)();
        LOCK();
        piVar1 = piVar2 + 2;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*piVar2 + 4))();
        }
      }
    }
    FUN_1016ad72();
  }
  local_14 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_1c;
  return param_1;
}

