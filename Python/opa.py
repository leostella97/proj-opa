import pyaop

class SecurityAspect(pyaop.Aspect):

    @pyaop.after("function()")
    def authenticate(self, result, *args, **kwargs):
        # lógica de autenticação de usuários

    @pyaop.before("function()")
    def authorize(self, *args, **kwargs):
        # lógica de autorização de usuários

class MyService:

    @pyaop.aspect(SecurityAspect())
    def my_function(self):
        # lógica da função
