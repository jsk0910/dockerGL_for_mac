# dockerGL_for_mac  
### Getting Start  
기본 요구 사항  
docker
디렉터리 구조    
dockerGL
  - Dockerfile
  - install.sh
  - src
      - config.sh
      - main.cpp
      - makefile


### How To Use?  
1. brew 설치  
   [https://whalec.io/mac/mac-homebrew-%EC%84%A4%EC%B9%98-%EB%B0%8F-%EC%82%AC%EC%9A%A9-%EB%B0%A9%EB%B2%95/](https://whalec.io/mac/mac-homebrew-%EC%84%A4%EC%B9%98-%EB%B0%8F-%EC%82%AC%EC%9A%A9-%EB%B0%A9%EB%B2%95/)  
2. XQuartz 설치
   ``` bash
   brew install --cask xquartz
   ```
     
3. 재부팅 후 다음 명령어 실행
   ``` bash
   open -a XQuartz
   ```
4. 상단 바에서 Xquartz > 설정 클릭하고 다음과 같이 설정 후 재부팅합니다.
   ![스크린샷 2023-07-30 오전 2 36 36](https://github.com/jsk0910/dockerGL_for_mac/assets/23286838/aa494dd5-018e-42a1-9798-ee969878cfb9)

5. Xquartz 종료
6. Terminal에서 ifconfig 명령어 입력 후 가장 아래쪽에 있는 inet부분을 install.sh의 X.X.X.X 부분에 입력
   ![스크린샷 2023-07-30 오전 2 40 40](https://github.com/jsk0910/dockerGL_for_mac/assets/23286838/a89f635e-cd6a-4c5c-ae82-1638a7943d75)

7. Terminal에서 dockerGL 설치 경로에 가서 다음 명령어 실행
   ``` bash
   sh install.sh
   ```  
   Password가 나오면 사용자 비밀번호(macos의) 입력
8. 다음 명령어 실행
   ``` bash
   cd src
   sh config.sh
   6 Enter 69
   make
   ./main
   ```
