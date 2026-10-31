/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e2e0e */

undefined8 Catch_1800e2e0e(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1800e5a8c();
  uVar2 = (**(code **)(**(longlong **)(param_2 + 0x148) + 8))();
  *(undefined8 *)(param_2 + 0x100) = uVar2;
  *(undefined8 *)(param_2 + 0x50) = "GameConfig loading throws {}";
  *(undefined8 *)(param_2 + 0x58) = 0x1c;
  *(undefined8 *)(param_2 + 0x38) =
       "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\engine_ui.cpp";
  *(undefined4 *)(param_2 + 0x40) = 0x5d;
  *(char **)(param_2 + 0x48) = "EngineUIGameConfig::load";
  FUN_1800b7668(uVar1,(undefined8 *)(param_2 + 0x38),4,(undefined8 *)(param_2 + 0x50),
                (undefined8 *)(param_2 + 0x100));
  return 0x1800e2b73;
}

