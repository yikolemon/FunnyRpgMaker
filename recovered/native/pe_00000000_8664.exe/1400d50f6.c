/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d50f6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400d50f6(void)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined **ppuVar8;
  ulonglong uVar9;
  longlong **pplVar10;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  longlong *local_1b0;
  char *local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  longlong **local_190;
  undefined8 local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  longlong *local_160;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  ulonglong local_50;
  
  local_50 = DAT_140f17b40 ^ (ulonglong)auStack_1d8;
  plVar3 = (longlong *)FUN_1400d30d4();
  uVar9 = 0;
  if (*plVar3 != 0) {
    FUN_1400d5482();
    local_188 = 0;
    local_190 = &local_160;
    local_198 = 0;
    local_1a0 = 0;
    local_1a8 = "vs_4_0";
    local_1b0 = (longlong *)&DAT_140ec751e;
    local_1b8 = (longlong *)0x0;
    iVar2 = D3DCompile("cbuffer vertexBuffer : register(b0)             {              float4x4 ProjectionMatrix;             };            struct VS_INPUT            {              float2 pos : POSITION;              float4 col : COLOR0;              float2 uv  : TEXCOORD0;            };                        struct PS_INPUT            {              float4 pos : SV_POSITION;              float4 col : COLOR0;              float2 uv  : TEXCOORD0;            };                        PS_INPUT main(VS_INPUT input)            {              PS_INPUT output;              output.pos = mul( ProjectionMatrix, float4(input.pos.xy, 0.f, 1.f));              output.col = input.col;              output.uv  = input.uv;              return output;            }"
                       ,0x2dd,0,0);
    if (-1 < iVar2) {
      plVar1 = (longlong *)*plVar3;
      uVar4 = (**(code **)(*local_160 + 0x20))();
      uVar5 = (**(code **)(*local_160 + 0x18))();
      local_1b8 = plVar3 + 5;
      iVar2 = (**(code **)(*plVar1 + 0x60))(plVar1,uVar5,uVar4,0);
      if (iVar2 == 0) {
        ppuVar8 = &PTR_s_POSITION_140eccd50_0xe_140e82220;
        pplVar10 = (longlong **)&local_158;
        for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
          *pplVar10 = (longlong *)*ppuVar8;
          ppuVar8 = ppuVar8 + 1;
          pplVar10 = pplVar10 + 1;
        }
        plVar1 = (longlong *)*plVar3;
        plVar6 = (longlong *)(**(code **)(*local_160 + 0x20))();
        uVar4 = (**(code **)(*local_160 + 0x18))();
        local_1b8 = plVar6;
        local_1b0 = plVar3 + 6;
        iVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,&local_158,3,uVar4);
        (**(code **)(*local_160 + 0x10))();
        if (iVar2 == 0) {
          local_178 = _DAT_140e822a0;
          uStack_174 = _UNK_140e822a4;
          uStack_170 = _UNK_140e822a8;
          uStack_16c = _UNK_140e822ac;
          local_168 = 0;
          (**(code **)(*(longlong *)*plVar3 + 0x18))((longlong *)*plVar3,&local_178,0,plVar3 + 7);
          local_188 = 0;
          local_198 = 0;
          local_1a0 = 0;
          local_1a8 = "ps_4_0";
          local_1b0 = (longlong *)&DAT_140ec751e;
          local_1b8 = (longlong *)0x0;
          local_190 = (longlong **)&local_158;
          iVar2 = D3DCompile("struct PS_INPUT            {            float4 pos : SV_POSITION;            float4 col : COLOR0;            float2 uv  : TEXCOORD0;            };            sampler sampler0;            Texture2D texture0;                        float4 main(PS_INPUT input) : SV_Target            {            float4 out_col = input.col * texture0.Sample(sampler0, input.uv);             return out_col;             }"
                             ,0x191,0,0);
          if (-1 < iVar2) {
            plVar1 = (longlong *)*plVar3;
            uVar4 = (**(code **)(*(longlong *)CONCAT44(local_158._4_4_,(undefined4)local_158) + 0x20
                                ))();
            uVar5 = (**(code **)(*(longlong *)CONCAT44(local_158._4_4_,(undefined4)local_158) + 0x18
                                ))();
            local_1b8 = plVar3 + 8;
            iVar2 = (**(code **)(*plVar1 + 0x78))(plVar1,uVar5,uVar4,0);
            (**(code **)(*(longlong *)CONCAT44(local_158._4_4_,(undefined4)local_158) + 0x10))();
            if (iVar2 == 0) {
              FUN_1401c5830(&local_158,0,0x108);
              uStack_150 = _DAT_140e822b0;
              uStack_14c = _UNK_140e822b4;
              uStack_148 = _UNK_140e822b8;
              uStack_144 = _UNK_140e822bc;
              uStack_140 = 2;
              uStack_13c = 6;
              uStack_138 = 1;
              uStack_134 = CONCAT31(uStack_134._1_3_,0xf);
              (**(code **)(*(longlong *)*plVar3 + 0xa0))
                        ((longlong *)*plVar3,&local_158,plVar3 + 0xc);
              uStack_138 = 0;
              uStack_134 = 0;
              uStack_150 = 0;
              uStack_14c = 0;
              uStack_148 = 0;
              uStack_144 = 0;
              local_158._0_4_ = 3;
              local_158._4_4_ = 1;
              uStack_140 = 1;
              uStack_13c = 1;
              (**(code **)(*(longlong *)*plVar3 + 0xb0))
                        ((longlong *)*plVar3,&local_158,plVar3 + 0xb);
              local_158._0_4_ = 0;
              uStack_14c = 0;
              uStack_148 = 0;
              local_158._4_4_ = 1;
              uStack_150 = 8;
              uStack_144 = (undefined4)_DAT_140e822c0;
              uStack_140 = (undefined4)((ulonglong)_DAT_140e822c0 >> 0x20);
              uStack_13c = (undefined4)_UNK_140e822c8;
              uStack_138 = (undefined4)((ulonglong)_UNK_140e822c8 >> 0x20);
              uStack_134 = uStack_144;
              uStack_130 = uStack_140;
              uStack_12c = uStack_13c;
              local_128 = uStack_138;
              (**(code **)(*(longlong *)*plVar3 + 0xa8))
                        ((longlong *)*plVar3,&local_158,plVar3 + 0xd);
              uStack_144 = 0;
              uStack_13c = 0;
              uStack_138 = 0;
              uStack_134 = 0;
              uStack_130 = 0;
              uStack_12c = 0;
              local_128 = 0;
              local_158._0_4_ = _DAT_140e822d0;
              local_158._4_4_ = _UNK_140e822d4;
              uStack_150 = _UNK_140e822d8;
              uStack_14c = _UNK_140e822dc;
              uStack_148 = 0;
              uStack_140 = 8;
              (**(code **)(*(longlong *)*plVar3 + 0xb8))((longlong *)*plVar3,&local_158,plVar3 + 9);
              local_158._0_4_ = 0;
              (**(code **)(*(longlong *)*plVar3 + 0xb8))((longlong *)*plVar3,&local_158,plVar3 + 10)
              ;
              uVar9 = CONCAT71((int7)((ulonglong)&local_158 >> 8),1);
              goto LAB_1400d5242;
            }
          }
        }
      }
      else {
        (**(code **)(*local_160 + 0x10))();
      }
    }
    uVar9 = 0;
  }
LAB_1400d5242:
  if (DAT_140f17b40 == (local_50 ^ (ulonglong)auStack_1d8)) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_50 ^ (ulonglong)auStack_1d8);
}

